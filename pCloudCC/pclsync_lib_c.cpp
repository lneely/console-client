#include "pclsync_lib_c.h"
#include "pclsync_lib.h"



#ifdef __cplusplus
extern "C" {
#endif

 namespace cc = console_client::clibrary;
 
  int init() {
	if (!cc::pclsync_lib::get_lib().was_init_)
	  return cc::pclsync_lib::get_lib().init();
	else return 0;
  }

  int statrt_crypto (const char* pass) {
	return cc::pclsync_lib::statrt_crypto (pass, NULL);
  }
  int stop_crypto () {
	return cc::pclsync_lib::stop_crypto (NULL, NULL);
  }
  int finalize () { 
	return cc::pclsync_lib::finalize(NULL, NULL);
  }
  void set_status_callback(status_callback_t c) {
	cc::pclsync_lib::get_lib().set_status_callback(c);
  }

  char * get_token(){
	return cc::pclsync_lib::get_lib().get_token();
  }

  int login(const char* user, const char* pass, int save) {
	return cc::pclsync_lib::get_lib().login(user, pass, save);
  }

  int logout() {
	return cc::pclsync_lib::get_lib().logout();
  }

  int unlinklib() {
	return cc::pclsync_lib::get_lib().unlink();
  }

#ifdef __cplusplus
}
#endif
