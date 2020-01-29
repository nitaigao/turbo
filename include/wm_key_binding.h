#ifndef WM_KEY_BINDING_H_
#define WM_KEY_BINDING_H_

#include <wlr/types/wlr_keyboard.h>

struct wm_key_binding {
  virtual ~wm_key_binding() { }

  wm_key_binding();

  bool ctrl;
  bool alt;
  bool super;
  unsigned int key;
  wlr_key_state state;

  int mods() const;

  bool matches(int modifiers, unsigned int sym, wlr_key_state Key_state);

  virtual void run() = 0;
};


#endif  // WM_KEY_BINDING_H_
