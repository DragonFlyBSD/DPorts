# Created by: buganini@gmail.com
# $FreeBSD: security/chntpw/Makefile 335103 2013-11-28 15:48:46Z jadawin $

PORTNAME=	chntpw
PORTVERSION=	110511
PORTREVISION=	1
CATEGORIES=	security sysutils
MASTER_SITES=	http://pogostick.net/~pnh/ntpasswd/
DISTNAME=	${PORTNAME}-source-${PORTVERSION}

MAINTAINER=	buganini@gmail.com
COMMENT=	Utility to set the password and edit registry on Microsoft NT system

LICENSE=	GPLv2

OPTIONS_DEFINE=	DOCS

USE_ZIP=	yes
USE_OPENSSL=	yes
USES=		gmake

ONLY_FOR_ARCHS=	i386 amd64

BIN_FILES=	chntpw cpnt reged
PLIST_FILES=	${BIN_FILES:C|^|bin/|}
PORTDOCS=	README.txt WinReg.txt regedit.txt

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.pre.mk>

post-patch:
	@${REINPLACE_CMD} -e '/^CC=/d; /^OSSLPATH=/ s|=.*|=${OPENSSLBASE}|' ${WRKSRC}/Makefile
.if ${ARCH} == "x86_64"
	@${REINPLACE_CMD} -e '/^CFLAGS=/ s| -m32||' ${WRKSRC}/Makefile
.endif

do-install:
	${INSTALL_PROGRAM} ${BIN_FILES:C|^|${WRKSRC}/|} ${STAGEDIR}${PREFIX}/bin

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}
.endif

.include <bsd.port.post.mk>
