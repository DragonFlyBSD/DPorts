# Created by: zrj <zrj@ef.irc>

PORTNAME=	blub
PORTVERSION=	1.2
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	zrj@ef.irc
COMMENT=	Alternative bootloader + fgdisk for DragonFly BSD

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	zrj-rimwis
GH_PROJECT=	blub
GH_TAGNAME=	9f45119

MAKE_ARGS+=	BUILDING_BLUB=yes EFI_STAGING_SIZE=128
MAKE_ARGS+=	NOMANCOMPRESS=yes STRIP="" SHAREDIR=/share

OPTIONS_DEFINE=		EFI FGDISK LOCAL
OPTIONS_DEFAULT=	EFI FGDISK LOCAL
OPTIONS_SUB=	yes

EFI_DESC=	Build and install loader.efi
FGDISK_DESC=	Build and install GPT handling utility
LOCAL_DESC=	Perform localization, adding .local

EFI_VARS_OFF=	MAKE_ARGS+=LOADER_NO_EFI_SUPPORT=yes

.include <bsd.port.options.mk>

# Why LOCAL_VARS_ON doesn't work?
.if ${PORT_OPTIONS:MLOCAL}
PKGINSTALL=${PKGDIR}/pkg-install.local
PKGDEINSTALL=${PKGDIR}/pkg-deinstall.local
.endif

post-patch-LOCAL-on:
	@${REINPLACE_CMD} -e "s@/boot@${LOCALBASE}/boot@"	\
		${WRKSRC}/src/sbin/fgdisk/fgdisk.8		\
		${WRKSRC}/src/sbin/fgdisk/efi.c			\
		${WRKSRC}/src/sbin/fgdisk/boot.c
	@${REINPLACE_CMD} -e 's@loader"@loader.local"@'		\
			  -e 's@loader.efi"@loader.efi.local"@'	\
		${WRKSRC}/src/sys/boot/common/paths.h

do-build:
	(cd ${WRKSRC}/src/sys/boot && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${_MAKE_JOBS} ${MAKE_ARGS})

do-build-FGDISK-on:
	(cd ${WRKSRC}/src/sbin/fgdisk && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} ${_MAKE_JOBS} ${MAKE_ARGS})

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/boot/defaults \
		${STAGEDIR}${PREFIX}/share/man/man8
	${INSTALL_DATA} ${WRKSRC}/README.* \
		${STAGEDIR}${PREFIX}/boot
	(cd ${WRKSRC}/src/sys/boot && \
		${SETENV} ${MAKE_ENV} ${MAKE_CMD} install ${MAKE_ARGS} \
			DESTDIR=${STAGEDIR}${PREFIX})

do-install-FGDISK-on:
	${INSTALL_PROGRAM} ${WRKSRC}/src/sbin/fgdisk/fgdisk \
		${STAGEDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/src/sbin/fgdisk/fgdisk.8 \
		${STAGEDIR}${PREFIX}/share/man/man8

.include <bsd.port.mk>

# avoid playing with -O options or you'll go blind!
MAKE_ENV+= CFLAGS="-O -pipe"
