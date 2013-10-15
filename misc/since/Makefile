# Created by: Johann Visagie <wjv@FreeBSD.org>
# $FreeBSD: misc/since/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	since
PORTVERSION=	1.1
CATEGORIES=	misc
MASTER_SITES=	http://welz.org.za/projects/since/

MAINTAINER=	tabthorpe@FreeBSD.org
COMMENT=	View the end of a file like tail(1), but save state between sessions

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GMAKE=	yes

ALL_TARGET=	${PORTNAME}

MAN1=		since.1
PLIST_FILES=	bin/since

NO_STAGE=	yes
.include <bsd.port.mk>
