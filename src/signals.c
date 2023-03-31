#include <signal.h>
#include <Rinternals.h>

const char* sig_names[] = {
  "SIGHUP",
  "SIGINT",
  "SIGQUIT",
  "SIGILL",
  "SIGTRAP",
  "SIGABRT",
  "SIGIOT",
  "SIGBUS",
  "SIGEMT",
  "SIGFPE",
  "SIGKILL",
  "SIGUSR1",
  "SIGSEGV",
  "SIGUSR2",
  "SIGPIPE",
  "SIGALRM",
  "SIGTERM",
  "SIGSTKFLT",
  "SIGCHLD",
  "SIGCLD",
  "SIGCONT",
  "SIGSTOP",
  "SIGTSTP",
  "SIGTTIN",
  "SIGTTOU",
  "SIGURG",
  "SIGXCPU",
  "SIGXFSZ",
  "SIGVTALRM",
  "SIGPROF",
  "SIGWINCH",
  "SIGIO",
  "SIGPOLL",
  "SIGPWR",
  "SIGINFO",
  "SIGLOST",
  "SIGSYS",
  "SIGUNUSED",
  ""
};

SEXP processx__signals(void) {
  static SEXP out = NULL;

  if (!out) {
    out = mkNamed(VECSXP, sig_names);

#ifdef SIGHUP
    SET_VECTOR_ELT(out, 0, Rf_ScalarInteger(SIGHUP));
#endif
#ifdef SIGINT
    SET_VECTOR_ELT(out, 1, Rf_ScalarInteger(SIGINT));
#endif
#ifdef SIGQUIT
    SET_VECTOR_ELT(out, 2, Rf_ScalarInteger(SIGQUIT));
#endif
#ifdef SIGILL
    SET_VECTOR_ELT(out, 3, Rf_ScalarInteger(SIGILL));
#endif
#ifdef SIGTRAP
    SET_VECTOR_ELT(out, 4, Rf_ScalarInteger(SIGTRAP));
#endif
#ifdef SIGABRT
    SET_VECTOR_ELT(out, 5, Rf_ScalarInteger(SIGABRT));
#endif
#ifdef SIGIOT
    SET_VECTOR_ELT(out, 6, Rf_ScalarInteger(SIGIOT));
#endif
#ifdef SIGBUS
    SET_VECTOR_ELT(out, 7, Rf_ScalarInteger(SIGBUS));
#endif
#ifdef SIGEMT
    SET_VECTOR_ELT(out, 8, Rf_ScalarInteger(SIGEMT));
#endif
#ifdef SIGFPE
    SET_VECTOR_ELT(out, 9, Rf_ScalarInteger(SIGFPE));
#endif
#ifdef SIGKILL
    SET_VECTOR_ELT(out, 10, Rf_ScalarInteger(SIGKILL));
#endif
#ifdef SIGUSR1
    SET_VECTOR_ELT(out, 11, Rf_ScalarInteger(SIGUSR1));
#endif
#ifdef SIGSEGV
    SET_VECTOR_ELT(out, 12, Rf_ScalarInteger(SIGSEGV));
#endif
#ifdef SIGUSR2
    SET_VECTOR_ELT(out, 13, Rf_ScalarInteger(SIGUSR2));
#endif
#ifdef SIGPIPE
    SET_VECTOR_ELT(out, 14, Rf_ScalarInteger(SIGPIPE));
#endif
#ifdef SIGALRM
    SET_VECTOR_ELT(out, 15, Rf_ScalarInteger(SIGALRM));
#endif
#ifdef SIGTERM
    SET_VECTOR_ELT(out, 16, Rf_ScalarInteger(SIGTERM));
#endif
#ifdef SIGSTKFLT
    SET_VECTOR_ELT(out, 17, Rf_ScalarInteger(SIGSTKFLT));
#endif
#ifdef SIGCHLD
    SET_VECTOR_ELT(out, 18, Rf_ScalarInteger(SIGCHLD));
#endif
#ifdef SIGCLD
    SET_VECTOR_ELT(out, 19, Rf_ScalarInteger(SIGCLD));
#endif
#ifdef SIGCONT
    SET_VECTOR_ELT(out, 20, Rf_ScalarInteger(SIGCONT));
#endif
#ifdef SIGSTOP
    SET_VECTOR_ELT(out, 21, Rf_ScalarInteger(SIGSTOP));
#endif
#ifdef SIGTSTP
    SET_VECTOR_ELT(out, 22, Rf_ScalarInteger(SIGTSTP));
#endif
#ifdef SIGTTIN
    SET_VECTOR_ELT(out, 23, Rf_ScalarInteger(SIGTTIN));
#endif
#ifdef SIGTTOU
    SET_VECTOR_ELT(out, 24, Rf_ScalarInteger(SIGTTOU));
#endif
#ifdef SIGURG
    SET_VECTOR_ELT(out, 25, Rf_ScalarInteger(SIGURG));
#endif
#ifdef SIGXCPU
    SET_VECTOR_ELT(out, 26, Rf_ScalarInteger(SIGXCPU));
#endif
#ifdef SIGXFSZ
    SET_VECTOR_ELT(out, 27, Rf_ScalarInteger(SIGXFSZ));
#endif
#ifdef SIGVTALRM
    SET_VECTOR_ELT(out, 28, Rf_ScalarInteger(SIGVTALRM));
#endif
#ifdef SIGPROF
    SET_VECTOR_ELT(out, 29, Rf_ScalarInteger(SIGPROF));
#endif
#ifdef SIGWINCH
    SET_VECTOR_ELT(out, 30, Rf_ScalarInteger(SIGWINCH));
#endif
#ifdef SIGIO
    SET_VECTOR_ELT(out, 31, Rf_ScalarInteger(SIGIO));
#endif
#ifdef SIGPOLL
    SET_VECTOR_ELT(out, 32, Rf_ScalarInteger(SIGPOLL));
#endif
#ifdef SIGPWR
    SET_VECTOR_ELT(out, 33, Rf_ScalarInteger(SIGPWR));
#endif
#ifdef SIGINFO
    SET_VECTOR_ELT(out, 34, Rf_ScalarInteger(SIGINFO));
#endif
#ifdef SIGLOST
    SET_VECTOR_ELT(out, 35, Rf_ScalarInteger(SIGLOST));
#endif
#ifdef SIGSYS
    SET_VECTOR_ELT(out, 36, Rf_ScalarInteger(SIGSYS));
#endif
#ifdef SIGUNUSED
    SET_VECTOR_ELT(out, 37, Rf_ScalarInteger(SIGUNUSED));
#endif

    R_PreserveObject(out);
  }

  return out;
}
