Imports System
Imports System.Windows.Forms
Imports System.Collections.Generic
Imports System.ComponentModel
Imports System.Drawing.Imaging
Imports System.Drawing


Public Class Drawing





    Dim selectedcolor As Color = Color.Red

    Dim clip As String = ""
    Dim fname As String = ""
    Dim sname As String = ""


    Private bmp As Bitmap
    Private g As Graphics
    Private m_Drawing As Boolean
    Private m_LastX As Integer
    Private m_LastY As Integer

    Sub SaveImage(ByVal pb As PictureBox, ByVal sFile As String)
        Dim bmp As New Bitmap(pb.Width, pb.Height)
        Dim g As Graphics = Graphics.FromImage(bmp)
        Dim pe As New PaintEventArgs(g, New Rectangle(Point.Empty, bmp.Size))
        Me.InvokePaint(pb, pe)
        Dim fmt As Imaging.ImageFormat
        Dim lFile As String = sFile.ToLower
        
        fmt = Imaging.ImageFormat.Bmp

        bmp.Save(sFile, fmt)
        g.Dispose()
        bmp.Dispose()
        pe.Dispose()
    End Sub



    Private Sub PictureBox1_MouseDown(ByVal sender As Object, ByVal e As System.Windows.Forms.MouseEventArgs) Handles PictureBox1.MouseDown
        m_Drawing = True
        m_LastX = e.X
        m_LastY = e.Y
    End Sub


    Private Sub PictureBox1_MouseMove(ByVal sender As Object, ByVal e As System.Windows.Forms.MouseEventArgs) Handles PictureBox1.MouseMove
        Dim myPen As New Pen(selectedcolor, 1)

        Dim b As Bitmap = New Bitmap(PictureBox1.Height, PictureBox1.Width)

        Dim g As Graphics = Graphics.FromImage(b)

        '' If m_Drawing Then

        '' g.DrawLine(myPen, m_LastX, m_LastY, e.X, e.Y)
        g.Clear(Color.White)
        g.DrawLine(Pens.Black, 5, 5, 50, 5)

        '' m_LastX = e.X
        ''  m_LastY = e.Y


        ''  End If

        g.Dispose()

        PictureBox1.Image = b





        
    End Sub


    Private Sub PictureBox1_MouseUp(ByVal sender As Object, ByVal e As System.Windows.Forms.MouseEventArgs) Handles PictureBox1.MouseUp
        m_Drawing = False
    End Sub



    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnClear.Click
        Me.PictureBox1.Refresh()

    End Sub



    Private Sub btnColor_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnColor.Click
        Dim myDialog As New ColorDialog()
        Dim Temp As Color = btnColor.BackColor
        If myDialog.ShowDialog() = DialogResult.OK Then
            selectedcolor = myDialog.Color
            btnColor.BackColor = selectedcolor
        End If
    End Sub

    Private Sub btnSave_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnSave.Click

        Dim sFileName As String = ""


        'get the filename to save to
        If SaveFileDialog1.ShowDialog = DialogResult.OK Then
            sFileName = SaveFileDialog1.FileName

        End If

        SaveImage(PictureBox1, sFileName)


    End Sub


    Private Sub btnLoad_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnLoad.Click

        Dim pic As Image
        OpenFileDialog1.ShowDialog()
        pic = New Bitmap(OpenFileDialog1.FileName)
        PictureBox1.Image = pic
    End Sub

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        btnColor.BackColor = selectedcolor
        bmp = New Bitmap(PictureBox1.Width, PictureBox1.Height)
        g = Graphics.FromImage(bmp)

        g.Clear(Me.BackColor)

        PictureBox1.Image = bmp
    End Sub
End Class
