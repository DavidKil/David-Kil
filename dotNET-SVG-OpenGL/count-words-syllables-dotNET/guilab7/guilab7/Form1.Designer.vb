<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.txtMain = New System.Windows.Forms.TextBox
        Me.btnExit = New System.Windows.Forms.Button
        Me.txtWords = New System.Windows.Forms.TextBox
        Me.txtSyll = New System.Windows.Forms.TextBox
        Me.txtIndex = New System.Windows.Forms.TextBox
        Me.lblWord = New System.Windows.Forms.Label
        Me.lblSyllable = New System.Windows.Forms.Label
        Me.lblIndex = New System.Windows.Forms.Label
        Me.txtSentence = New System.Windows.Forms.TextBox
        Me.lblSentence = New System.Windows.Forms.Label
        Me.SuspendLayout()
        '
        'txtMain
        '
        Me.txtMain.Location = New System.Drawing.Point(12, 12)
        Me.txtMain.Multiline = True
        Me.txtMain.Name = "txtMain"
        Me.txtMain.Size = New System.Drawing.Size(305, 191)
        Me.txtMain.TabIndex = 0
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(242, 284)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(75, 23)
        Me.btnExit.TabIndex = 1
        Me.btnExit.Text = "Exit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'txtWords
        '
        Me.txtWords.Location = New System.Drawing.Point(134, 216)
        Me.txtWords.Name = "txtWords"
        Me.txtWords.Size = New System.Drawing.Size(96, 20)
        Me.txtWords.TabIndex = 2
        '
        'txtSyll
        '
        Me.txtSyll.Location = New System.Drawing.Point(134, 242)
        Me.txtSyll.Name = "txtSyll"
        Me.txtSyll.Size = New System.Drawing.Size(96, 20)
        Me.txtSyll.TabIndex = 3
        '
        'txtIndex
        '
        Me.txtIndex.Location = New System.Drawing.Point(134, 268)
        Me.txtIndex.Name = "txtIndex"
        Me.txtIndex.Size = New System.Drawing.Size(96, 20)
        Me.txtIndex.TabIndex = 4
        '
        'lblWord
        '
        Me.lblWord.AutoSize = True
        Me.lblWord.Location = New System.Drawing.Point(13, 216)
        Me.lblWord.Name = "lblWord"
        Me.lblWord.Size = New System.Drawing.Size(38, 13)
        Me.lblWord.TabIndex = 5
        Me.lblWord.Text = "Words"
        '
        'lblSyllable
        '
        Me.lblSyllable.AutoSize = True
        Me.lblSyllable.Location = New System.Drawing.Point(13, 248)
        Me.lblSyllable.Name = "lblSyllable"
        Me.lblSyllable.Size = New System.Drawing.Size(48, 13)
        Me.lblSyllable.TabIndex = 6
        Me.lblSyllable.Text = "Syllables"
        '
        'lblIndex
        '
        Me.lblIndex.AutoSize = True
        Me.lblIndex.Location = New System.Drawing.Point(13, 275)
        Me.lblIndex.Name = "lblIndex"
        Me.lblIndex.Size = New System.Drawing.Size(120, 13)
        Me.lblIndex.TabIndex = 7
        Me.lblIndex.Text = "Fletch Readability Index"
        '
        'txtSentence
        '
        Me.txtSentence.Location = New System.Drawing.Point(134, 295)
        Me.txtSentence.Name = "txtSentence"
        Me.txtSentence.Size = New System.Drawing.Size(96, 20)
        Me.txtSentence.TabIndex = 8
        '
        'lblSentence
        '
        Me.lblSentence.AutoSize = True
        Me.lblSentence.Location = New System.Drawing.Point(13, 298)
        Me.lblSentence.Name = "lblSentence"
        Me.lblSentence.Size = New System.Drawing.Size(58, 13)
        Me.lblSentence.TabIndex = 9
        Me.lblSentence.Text = "Sentences"
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(329, 319)
        Me.Controls.Add(Me.lblSentence)
        Me.Controls.Add(Me.txtSentence)
        Me.Controls.Add(Me.lblIndex)
        Me.Controls.Add(Me.lblSyllable)
        Me.Controls.Add(Me.lblWord)
        Me.Controls.Add(Me.txtIndex)
        Me.Controls.Add(Me.txtSyll)
        Me.Controls.Add(Me.txtWords)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.txtMain)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents txtMain As System.Windows.Forms.TextBox
    Friend WithEvents btnExit As System.Windows.Forms.Button
    Friend WithEvents txtWords As System.Windows.Forms.TextBox
    Friend WithEvents txtSyll As System.Windows.Forms.TextBox
    Friend WithEvents txtIndex As System.Windows.Forms.TextBox
    Friend WithEvents lblWord As System.Windows.Forms.Label
    Friend WithEvents lblSyllable As System.Windows.Forms.Label
    Friend WithEvents lblIndex As System.Windows.Forms.Label
    Friend WithEvents txtSentence As System.Windows.Forms.TextBox
    Friend WithEvents lblSentence As System.Windows.Forms.Label

End Class
