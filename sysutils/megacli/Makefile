# Created by: Vladimir Laskov <samflanker@gmail.com>
# $FreeBSD$

PORTNAME=	megacli
DISTVERSION=	8-07-14
CATEGORIES=	sysutils
MASTER_SITES=	http://www.avagotech.com/docs-and-downloads/raid-controllers/raid-controllers-common-files/
DISTNAME=	${DISTVERSION}_MegaCLI
EXTRACT_SUFX=	.zip

MAINTAINER=	samflanker@gmail.com
COMMENT=	SAS MegaRAID FreeBSD MegaCLI

RESTRICTED=	Source recipient must acknowledge license. Reproduction or redistribution prohibited. See http://www.lsi.com/lookup/License.aspx

ONLY_FOR_ARCHS=	i386 amd64

NO_BUILD=	yes
NO_WRKSUBDIR=	yes

PLIST_FILES=	sbin/MegaCli

MEGACLI_ARCH=	MegaCli${ARCH:S/i386//:S/amd64/64/:S/x86_64/64/}

post-extract:
	@${MV} ${WRKSRC}/FreeBSD/MegaCLI.zip ${WRKSRC}/FreeBSD/MegaCli.zip
	@${TAR} -xf ${WRKSRC}/FreeBSD/${MEGACLI_ARCH}.zip -C ${WRKSRC}/FreeBSD

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/FreeBSD/${MEGACLI_ARCH} ${STAGEDIR}${PREFIX}/sbin/MegaCli

.include <bsd.port.mk>
