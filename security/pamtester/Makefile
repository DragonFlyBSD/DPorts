# Created by: andy@fud.org.nz
# $FreeBSD: security/pamtester/Makefile 340722 2014-01-22 17:00:46Z mat $

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
