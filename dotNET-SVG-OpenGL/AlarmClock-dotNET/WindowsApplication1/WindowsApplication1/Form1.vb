Public Class Form1

    Private Sub Timer1_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Timer1.Tick
        txtTime.Text = FormatDateTime(TimeOfDay, DateFormat.LongTime)

        Dim m As Integer
        Dim s As String = ""
        With Form2.DataGridView1

            For m = 0 To 12


                If (.Item(0, m).Value <= FormatDateTime(Now, DateFormat.LongTime)) And .Item(2, m).Value = False And .Item(0, m).Value <> "" Then
                    s = .Item(1, m).Value
                    .Item(2, m).Value = True
                    MsgBox(s)


                End If



                ' .Item(0, m).ReadOnly = True 
            Next
        End With

    End Sub

    Private Sub btnAlarms_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnAlarms.Click
        Form2.ShowDialog()
    End Sub

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        With Form2.DataGridView1

            .RowCount = 13
            .ColumnCount = 3


        End With
    End Sub

    
End Class
