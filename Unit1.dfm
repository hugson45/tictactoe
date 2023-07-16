object Form1: TForm1
  Left = 192
  Top = 125
  Width = 562
  Height = 443
  Caption = 'Kolko_krzyzyk'
  Color = clHighlight
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Pole1: TImage
    Left = 16
    Top = 8
    Width = 110
    Height = 110
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole1Click
  end
  object Pole2: TImage
    Left = 128
    Top = 8
    Width = 110
    Height = 110
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole2Click
  end
  object Pole3: TImage
    Left = 240
    Top = 8
    Width = 110
    Height = 110
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole3Click
  end
  object Pole4: TImage
    Left = 16
    Top = 120
    Width = 110
    Height = 110
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole4Click
  end
  object Pole5: TImage
    Left = 128
    Top = 120
    Width = 110
    Height = 110
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole5Click
  end
  object Pole6: TImage
    Left = 240
    Top = 120
    Width = 110
    Height = 110
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole6Click
  end
  object Pole7: TImage
    Left = 16
    Top = 232
    Width = 110
    Height = 110
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole7Click
  end
  object Pole8: TImage
    Left = 128
    Top = 232
    Width = 110
    Height = 110
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole8Click
  end
  object Pole9: TImage
    Left = 240
    Top = 232
    Width = 110
    Height = 110
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole9Click
  end
  object Label1: TLabel
    Left = 392
    Top = 16
    Width = 109
    Height = 18
    Caption = 'Tura Gracza'
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Tura: TImage
    Left = 424
    Top = 56
    Width = 50
    Height = 50
    Transparent = True
  end
  object Button1: TButton
    Left = 392
    Top = 136
    Width = 113
    Height = 57
    Caption = 'Od nowa'
    Font.Charset = ANSI_CHARSET
    Font.Color = clBlue
    Font.Height = -19
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
end
