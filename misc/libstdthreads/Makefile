
PORTNAME=	libstdthreads
PORTVERSION=	0.11
CATEGORIES=	misc
MASTER_SITES=	https://avalon.dragonflybsd.org/misc/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}


MAINTAINER=	dports@ef.irc
COMMENT=	The C11 threads interface on top of the pthreads library.

LICENSE=	BSD2CLAUSE
MAEKFILE=	Makefile

do-install:
	${INSTALL_LIB} ${WRKSRC}/libstdthreads.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_LIB} ${WRKSRC}/libstdthreads.so.0 ${STAGEDIR}${PREFIX}/lib
	${RLN} ${STAGEDIR}${PREFIX}/lib/libstdthreads.so.0 ${STAGEDIR}${PREFIX}/lib/libstdthreads.so
	${INSTALL_DATA} ${WRKSRC}/threads.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_MAN} ${WRKSRC}/thrd_create.3 ${STAGEDIR}${PREFIX}/${GNU_CONFIGURE_MANPREFIX}/share/man/man3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/call_once.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/cnd_broadcast.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/cnd_destroy.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/cnd_init.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/cnd_signal.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/cnd_timedwait.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/cnd_wait.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/mtx_destroy.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/mtx_init.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/mtx_lock.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/mtx_timedlock.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/mtx_trylock.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/mtx_unlock.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/thrd_current.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/thrd_detach.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/thrd_equal.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/thrd_exit.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/thrd_join.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/thrd_sleep.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/thrd_yield.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/tss_create.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/tss_delete.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/tss_get.3
	${RLN} ${STAGEDIR}${PREFIX}/share/man/man3/thrd_create.3 ${STAGEDIR}${PREFIX}/share/man/man3/tss_set.3

.include <bsd.port.mk>
