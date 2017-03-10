object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 300
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 214
    Top = 246
    Width = 75
    Height = 25
    Caption = 'Border'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 320
    Top = 246
    Width = 75
    Height = 25
    Caption = 'Clear'
    TabOrder = 1
    OnClick = Button2Click
  end
  inline Frame31: TFrame3
    Left = 160
    Top = 32
    Width = 281
    Height = 177
    Color = clTeal
    ParentBackground = False
    ParentColor = False
    TabOrder = 2
    ExplicitLeft = 160
    ExplicitTop = 32
    ExplicitWidth = 281
    ExplicitHeight = 177
    inherited Edit1: TEdit
      Left = 72
      Top = 104
      Width = 145
      ExplicitLeft = 72
      ExplicitTop = 104
      ExplicitWidth = 145
    end
    inherited ComboBox1: TComboBox
      Left = 72
      ExplicitLeft = 72
    end
  end
end
