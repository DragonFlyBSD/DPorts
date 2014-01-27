# Created by: Kirill Ponomarew <ponomarew@oberon.net>
# $FreeBSD: mail/smtpmail/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	smtpmail
PORTVERSION=	0.4.5
CATEGORIES=	mail
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tool to send e-mail via a remote smtp server

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include

PLIST_FILES=	bin/smtpmail

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
