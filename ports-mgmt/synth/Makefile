PORTNAME=	synth
DISTVERSIONPREFIX=	v
DISTVERSION=	2.13
PORTREVISION=	1
CATEGORIES=	ports-mgmt

MAINTAINER=	fluffy@FreeBSD.org
COMMENT=	Custom package repository builder for FreeBSD and DragonFly
WWW=		https://github.com/jrmarino/synth

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/License.txt

BUILD_DEPENDS=	${GPR}/ini_file_manager.gpr:misc/ini_file_manager \
		${GPR}/adacurses.gpr:devel/adacurses

USES=		ada:6 ncurses:base
USE_GITHUB=	yes
GH_ACCOUNT=	jrmarino

GPR=		${LOCALBASE}/lib/gnat
MAKE_ENV=	NCURSES_LINK=static

OPTIONS_DEFINE=	WATCHDOG
OPTIONS_DEFAULT=WATCHDOG

WATCHDOG_DESC=	Build with watchdog monitor

WATCHDOG_EXTRA_PATCHES_OFF=	${FILESDIR}/extrapatch-nowatchdog-portscan-buildcycle.adb

.include <bsd.port.pre.mk>

post-extract:
.if ${OPSYS} == DragonFly && ${OSVERSION} < 400600
	@${REINPLACE_CMD} -e 's|"re"|"r"|' ${WRKSRC}/src/unix.adb
.endif
	@${REINPLACE_CMD} -e "s|/usr/local|${LOCALBASE}|" \
		${WRKSRC}/src/definitions.ads

do-build:
	(cd ${WRKSRC}/src && ${SETENV} ${MAKE_ENV} \
		gcc -c unix_core.c -o ../build/unix_core.o)
	(cd ${WRKSRC}/synthexec && ${SETENV} ${MAKE_ENV} \
		gcc synthexec.c -o ../build/synthexec)
	(cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} gnatmake -P default \
		-largs build/unix_core.o)

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/bash_completion.d \
		${STAGEDIR}${PREFIX}/share/zsh/site-functions \
		${STAGEDIR}${PREFIX}/share/synth \
		${STAGEDIR}/var/log/synth \
		${STAGEDIR}/var/synth/live_packages
	${INSTALL_PROGRAM} ${WRKSRC}/build/synth \
		${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/build/synthexec \
		${STAGEDIR}${PREFIX}/libexec
	${INSTALL_MAN} ${WRKSRC}/synth.1 ${STAGEDIR}${MANPREFIX}/man/man1
	${INSTALL_SCRIPT} ${WRKSRC}/shell-completers/_synth.bash \
		${STAGEDIR}${PREFIX}/etc/bash_completion.d
	${INSTALL_DATA} ${WRKSRC}/shell-completers/_synth \
		${STAGEDIR}${PREFIX}/share/zsh/site-functions
	${INSTALL_DATA} ${WRKSRC}/www/* ${STAGEDIR}${PREFIX}/share/synth

.include <bsd.port.post.mk>
