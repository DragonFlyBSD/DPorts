# Created by: Markus Brueffer <brueffer@phoenix-systems.de>
# $FreeBSD: sysutils/filelight/Makefile 313088 2013-02-28 10:51:58Z gahr $

PORTNAME=	filelight
PORTVERSION=	1.0
PORTREVISION=	7
CATEGORIES=	sysutils kde
MASTER_SITES=	http://www.methylblue.com/filelight/packages/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Represent a file system as a set of concentric segmented-rings

USE_KDELIBS_VER=3
USE_AUTOTOOLS=	libtool
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_GETTEXT=	yes

post-patch:
	@${REINPLACE_CMD} -e 's/-O2//g' ${WRKSRC}/${CONFIGURE_SCRIPT}

.include <bsd.port.mk>
