# Created by: andy@fud.org.nz
# $FreeBSD: security/pamtester/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	pamtester
PORTVERSION=	0.1.2
CATEGORIES=	security
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A command line pam authentication tester

MAN1=		pamtester.1

GNU_CONFIGURE=	yes
CPPFLAGS+=	${CFLAGS}
USE_GMAKE=	yes

PLIST_FILES=	bin/pamtester

NO_STAGE=	yes
.include <bsd.port.mk>
