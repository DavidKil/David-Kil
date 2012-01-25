Imports System.IO
Imports Microsoft.VisualBasic.ControlChars

Public Class Form1

    Dim clip As String = ""
    Dim fname As String = ""
    Dim sname As String = ""



    Private Sub mnuPaste_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuPaste.Click
        txtInput.SelectedText = clip
    End Sub



    Private Sub mnuCut_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuCut.Click
        clip = txtInput.SelectedText
        txtInput.SelectedText = ""
    End Sub

    Private Sub mnuConcatCut_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuConcatCut.Click
        clip = clip + txtInput.SelectedText
        txtInput.SelectedText = ""
    End Sub

    Private Sub mnuClear_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuClear.Click
        clip = ""
    End Sub

    Private Sub mnuCopy_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuCopy.Click
        clip = txtInput.SelectedText
    End Sub

    Private Sub mnuConcatCopy_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuConcatCopy.Click
        clip = clip + txtInput.SelectedText

    End Sub

    Private Sub ExitToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuExit.Click
        End
    End Sub

    Private Sub mnuOpen_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuOpen.Click
        Dim instream As StreamReader

        fdOpen.ShowDialog()
        fname = fdOpen.FileName

        Try
            instream = File.OpenText(name)
        Catch
            MsgBox("File does not exist!! --" & name, MsgBoxStyle.Critical)
            Return
        End Try
        Dim line As String
        line = instream.ReadLine()
        While line <> Nothing
            txtInput.AppendText(line & NewLine)
            line = instream.ReadLine
        End While
        instream.Close()

    End Sub


    Private Sub mnuSave_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles mnuSave.Click
        Dim outstream As StreamWriter

        fdSave.ShowDialog()
        sname = fdSave.FileName

        Try
            outstream = File.CreateText(sname)
        Catch
            MsgBox("Cannot open file for output! -- " & sname, MsgBoxStyle.Critical)
            Return
        End Try

        outstream.WriteLine(txtInput.Text)
        outstream.Close()

    End Sub
End Class





