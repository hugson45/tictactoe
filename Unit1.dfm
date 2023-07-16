object Form1: TForm1
  Left = 192
  Top = 125
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsToolWindow
  Caption = 'KolkoKrzyzyk'
  ClientHeight = 394
  ClientWidth = 562
  Color = clAqua
  UseDockManager = True
  DockSite = True
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
    Width = 105
    Height = 105
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole1Click
  end
  object Pole2: TImage
    Left = 120
    Top = 8
    Width = 105
    Height = 105
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole2Click
  end
  object Pole3: TImage
    Left = 224
    Top = 8
    Width = 105
    Height = 105
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole3Click
  end
  object Pole6: TImage
    Left = 224
    Top = 112
    Width = 105
    Height = 105
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole6Click
  end
  object Pole5: TImage
    Left = 120
    Top = 112
    Width = 105
    Height = 105
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole5Click
  end
  object Pole4: TImage
    Left = 16
    Top = 112
    Width = 105
    Height = 105
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole4Click
  end
  object Pole9: TImage
    Left = 224
    Top = 216
    Width = 105
    Height = 105
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole9Click
  end
  object Pole8: TImage
    Left = 120
    Top = 216
    Width = 105
    Height = 105
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole8Click
  end
  object Pole7: TImage
    Left = 16
    Top = 216
    Width = 105
    Height = 105
    Cursor = crHandPoint
    Transparent = True
    OnClick = Pole7Click
  end
  object Label1: TLabel
    Left = 368
    Top = 24
    Width = 143
    Height = 29
    Caption = 'Tura Gracza'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Tura: TImage
    Left = 416
    Top = 64
    Width = 50
    Height = 50
    Transparent = True
  end
  object Button1: TButton
    Left = 360
    Top = 200
    Width = 153
    Height = 65
    Caption = 'Nowa Gra'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
end
