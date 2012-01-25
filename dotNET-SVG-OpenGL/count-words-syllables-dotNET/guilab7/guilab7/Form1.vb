

Public Class Form1


    Public Function IsVowel(ByVal input As String)
        If (input = "a" Or input = "e" Or input = "i" Or input = "o" Or input = "u" Or input = "y") Then
            Return 1
        Else
            Return 0
        End If
    End Function

    Public Function IsLetter(ByVal input As String)
        If ((input >= "a" And input <= "z")) Then
            Return 1
        Else
            Return 0
        End If


    End Function

    Private Sub btnExit_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnExit.Click
        End
    End Sub

    Private Sub TextBox1_TextChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtMain.TextChanged
        Dim input As String     '' easier handle stirngs than characters for the letter/word counter
        Dim i As Integer
        Dim j As Integer        '' initialise position counter for text box
        Dim vowel As Integer = 0 '' initialise counters for words,letters and switch for counting words
        Dim word_count As Integer = 0
        Dim sentence As Integer
        Dim curr_syll As Integer = 0
        Dim syll As Integer = 0
        Dim inaword As Integer = 0

        input = LCase(txtMain.Text())



        While (i < input.Length)

            If i = 0 Then
                j = 0
            Else
                j = i - 1
            End If

            If IsLetter(input(i)) Then

                If (inaword = 0) Then '' if it is new letter encountered, start word counter
                    inaword = 1
                    word_count = word_count + 1


                    If IsVowel(input(i)) = 1 Then

                        If vowel = 0 Then
                            vowel = 1
                            curr_syll = curr_syll + 1
                            i = i + 1


                        Else
                            i = i + 1
                        End If
                    Else

                        vowel = 0
                        i = i + 1

                    End If



                ElseIf inaword = 1 Then

                    If IsVowel(input(i)) = 1 Then

                        If vowel = 0 Then
                            vowel = 1
                            curr_syll = curr_syll + 1
                            i = i + 1


                        Else
                            i = i + 1
                        End If
                    Else

                        vowel = 0
                        i = i + 1

                    End If

                End If


            Else

                If inaword = 1 Then

                    If input(i - 1) = "e" And curr_syll > 1 Then

                        curr_syll = curr_syll - 1
                        syll = syll + curr_syll

                    Else
                        syll = syll + curr_syll
                    End If


                    curr_syll = 0
                    inaword = 0
                    vowel = 0
                    i = i + 1

                Else
                    syll = syll + curr_syll
                    curr_syll = 0
                    inaword = 0
                    vowel = 0
                    i = i + 1

                End If

            End If




        End While
        txtSyll.Text = syll
        txtWords.Text = word_count

        If (txtMain.Text = "") Then
            txtWords.Text = ""
            txtIndex.Text = ""
            txtSyll.Text = ""
        End If

    End Sub


End Class
