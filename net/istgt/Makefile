PORTNAME=	istgt
PORTVERSION=	20150713
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://www.peach.ne.jp/archives/istgt/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	iSCSI target for openSUSE/Debian/NetBSD/FreeBSD
WWW=		http://shell.peach.ne.jp/aoyama/

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

GNU_CONFIGURE=	yes
GNU_CONFIGURE_MANPREFIX=${PREFIX}/share

PORTDOCS=	${DOCFILES:T}
DOCFILES=	ChangeLog.jp README doc/QUICKSTART doc/QUICKSTART.jp

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	SYMLNKDEV VBOXVD DOCS

SYMLNKDEV_DESC=	Allow symbolic link for device file
VBOXVD_DESC=	VirtualBox VD support (no X11 required)

SYMLNKDEV_CONFIGURE_ON=	--enable-symlink-device

USES= ssl
CFLAGS= -I${OPENSSLINC}
LDFLAGS= -L${OPENSSLLIB}
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MVBOXVD}
VBOX_WRKSRC=	`${MAKE} -C ${PORTSDIR}/emulators/virtualbox-ose -V WRKSRC`
RUN_DEPENDS+=	${LOCALBASE}/lib/virtualbox/VBoxRT.so:emulators/virtualbox-ose
BUILD_DEPENDS+=	${NONEXISTENT}:emulators/virtualbox-ose:patch
CONFIGURE_ARGS+= --with-vbox=${VBOX_WRKSRC}/include ac_cv_lib_md_MD5Update=no
.endif

post-extract:
	@${REINPLACE_CMD} -e '/\/doc\/istgt/d' ${WRKSRC}/doc/Makefile.in

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOCFILES:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

dfly-patch:
	${REINPLACE_CMD} -e 's@<cam/@<bus/cam/@g' \
		${WRKSRC}/src/istgt_lu_pass.c

.include <bsd.port.mk>
