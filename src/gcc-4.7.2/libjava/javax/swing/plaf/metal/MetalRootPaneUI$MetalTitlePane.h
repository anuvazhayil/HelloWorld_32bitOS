
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_metal_MetalRootPaneUI$MetalTitlePane__
#define __javax_swing_plaf_metal_MetalRootPaneUI$MetalTitlePane__

#pragma interface

#include <javax/swing/JComponent.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Graphics;
        class LayoutManager;
    }
  }
  namespace javax
  {
    namespace swing
    {
        class Action;
        class Icon;
        class JButton;
        class JLabel;
        class JMenu;
        class JMenuBar;
        class JRootPane;
      namespace plaf
      {
        namespace metal
        {
            class MetalRootPaneUI$MetalTitlePane;
        }
      }
    }
  }
}

class javax::swing::plaf::metal::MetalRootPaneUI$MetalTitlePane : public ::javax::swing::JComponent
{

public: // actually package-private
  MetalRootPaneUI$MetalTitlePane(::javax::swing::JRootPane *);
public: // actually protected
  virtual ::java::awt::LayoutManager * createLayout();
  virtual void installTitlePane();
private:
  void enableActions();
  void addSubComponents();
  void installListeners();
  void createActions();
  void assembleSystemMenu();
public: // actually protected
  virtual ::javax::swing::JMenuBar * createSystemMenuBar();
  virtual ::javax::swing::JMenu * createSystemMenu();
private:
  void addSystemMenuItems(::javax::swing::JMenu *);
public: // actually protected
  virtual void createButtons();
  virtual void setButtonIcons();
public:
  virtual void paintComponent(::java::awt::Graphics *);
public: // actually protected
  virtual void paintTitleBackground(::java::awt::Graphics *);
private:
  void installDefaults();
public: // actually package-private
  ::javax::swing::JRootPane * __attribute__((aligned(__alignof__( ::javax::swing::JComponent)))) rootPane;
  ::javax::swing::JButton * closeButton;
  ::javax::swing::JButton * iconButton;
  ::javax::swing::JButton * maxButton;
  ::javax::swing::Icon * minIcon;
  ::javax::swing::Icon * maxIcon;
private:
  ::javax::swing::Icon * iconIcon;
public: // actually package-private
  ::javax::swing::Icon * closeIcon;
private:
  ::java::awt::Color * notSelectedTitleColor;
  ::java::awt::Color * selectedTitleColor;
public: // actually package-private
  ::javax::swing::JLabel * title;
private:
  ::javax::swing::Action * closeAction;
  ::javax::swing::Action * iconifyAction;
  ::javax::swing::Action * maximizeAction;
  ::javax::swing::JMenuBar * menuBar;
public: // actually protected
  ::javax::swing::JMenu * windowMenu;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_metal_MetalRootPaneUI$MetalTitlePane__
