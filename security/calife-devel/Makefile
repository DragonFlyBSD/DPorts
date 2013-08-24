# Created by: Thomas Quinot <thomas@cuivre.fr.eu.org>
# $FreeBSD: security/calife-devel/Makefile 324744 2013-08-14 22:35:50Z ak $
#

PORTNAME=	calife
PORTVERSION=	3.0.1
CATEGORIES=	security
MASTER_SITES=	http://assets.keltia.net/calife/
DISTNAME=	calife-3.0.1

MAINTAINER=	thomas@FreeBSD.org
COMMENT=	Lightweight alternative to sudo

LATEST_LINK=	${PORTNAME}-devel

USE_BZIP2=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-etcdir=${PREFIX}/etc

CONFIGURE_ARGS+=	--with-pam

CONFLICTS?=	calife-2.*

MAN1=		calife.1
MAN5=		calife.auth.5

post-install:
	@${INSTALL_DATA} ${WRKSRC}/pam/freebsd5 ${PREFIX}/etc/pam.d/calife.sample
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
