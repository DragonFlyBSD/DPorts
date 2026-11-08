PORTNAME=	ly
DISTVERSIONPREFIX=	v
DISTVERSION=	1.4.1
CATEGORIES=	x11
MASTER_SITES=	https://codeberg.org/fairyglade/${PORTNAME}/archive/${DISTVERSIONFULL}${EXTRACT_SUFX}?dummy=/

MAINTAINER=	kenrap@FreeBSD.org
COMMENT=	TUI (ncurses-like) display manager for X and Wayland
WWW=		https://codeberg.org/fairyglade/ly

LICENSE=	WTFPL
LICENSE_FILE=	${WRKSRC}/license.md

USES=		zig pkgconfig xorg
USE_XORG=	xcb
WRKSRC=		${WRKDIR}/${PORTNAME}

SUB_FILES=	pkg-message

USE_GITHUB=	yes

ZIG_ARGS=	-Dprefix_directory="${PREFIX}" \
		-Dconfig_directory="${PREFIX}/etc" \
		-Dinit_system=freebsd

post-install:
	${REINPLACE_CMD} 's,$$PREFIX_DIRECTORY,${PREFIX},g ; s,$$EXECUTABLE_NAME,ly,g' \
		${WRKSRC}/res/ly-freebsd-wrapper
	${INSTALL_SCRIPT} ${WRKSRC}/res/ly-freebsd-wrapper ${STAGEDIR}${PREFIX}/bin/ly_wrapper
	${INSTALL_DATA} ${WRKSRC}/res/pam.d/ly-freebsd ${STAGEDIR}${PREFIX}/etc/pam.d/ly
	${INSTALL_DATA} ${WRKSRC}/res/pam.d/ly-freebsd-autologin ${STAGEDIR}${PREFIX}/etc/pam.d/ly-autologin
	${MKDIR} ${STAGEDIR}${ETCDIR}/lang
	${INSTALL_DATA} ${WRKSRC}/res/lang/*.ini ${STAGEDIR}${ETCDIR}/lang/
	${MKDIR} ${STAGEDIR}${ETCDIR}/custom-sessions
	${INSTALL_DATA} ${WRKSRC}/res/custom-sessions/README ${STAGEDIR}${ETCDIR}/custom-sessions
	${REINPLACE_CMD} 's,$$PREFIX_DIRECTORY,${PREFIX},g; \
		s,$$CONFIG_DIRECTORY,${PREFIX}/etc,g ; \
		s,^brightness_down_cmd = .*,brightness_down_cmd = /usr/bin/backlight - 10, ; \
		s,^brightness_up_cmd = .*,brightness_up_cmd = /usr/bin/backlight + 10, ; \
		s,$$PLATFORM_SHUTDOWN_ARG,-p,g' \
		${WRKSRC}/res/config.ini
	${INSTALL_DATA} ${WRKSRC}/res/config.ini ${STAGEDIR}${ETCDIR}/config.ini.sample
	${REINPLACE_CMD} 's,"$$CONFIG_DIRECTORY"/profile,/etc/profile,g ; \
		s,$$CONFIG_DIRECTORY/csh.login,/etc/csh.login,g ; \
		s,"$$CONFIG_DIRECTORY",${PREFIX}/etc,g ;' \
		${WRKSRC}/res/setup.sh
	${INSTALL_SCRIPT} ${WRKSRC}/res/setup.sh ${STAGEDIR}${ETCDIR}/setup.sh.sample

dfly-patch:
	${REINPLACE_CMD} -e 's/target\.result\.os\.tag == \.freebsd/(& or target.result.os.tag == .dragonfly)/' \
		${WRKSRC}/ly-core/build.zig ${WRKSRC}/ly-ui/build.zig
	${REINPLACE_CMD} -e 's/\.freebsd => struct/.freebsd, .dragonfly => struct/' \
		-e 's/builtin\.os\.tag == \.freebsd/(& or builtin.os.tag == .dragonfly)/' \
		${WRKSRC}/ly-core/src/interop.zig
	${REINPLACE_CMD} -e 's/builtin\.os\.tag != \.freebsd/(& and builtin.os.tag != .dragonfly)/' \
		${WRKSRC}/src/auth.zig
	${REINPLACE_CMD} -e 's/\.{ "_Thread_local", \.keyword_thread_local },/& .{ "__thread", .keyword_thread_local },/' \
		${WRKDIR}/zig-packages/aro-*/src/aro/Tokenizer.zig

.include <bsd.port.mk>
