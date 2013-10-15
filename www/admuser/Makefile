# Created by: Jean Milanez Melo <jmelo@FreeBSD.org>
# $FreeBSD: www/admuser/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	admuser
PORTVERSION=	2.3.2
CATEGORIES=	www
MASTER_SITES=	http://sarg.sourceforge.net/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Handle your Squid or Web users and passwords using your browser

HAS_CONFIGURE=	yes

CONFIGURE_ARGS=	--prefix=${PREFIX}/etc/admuser \
		--enable-language=English \
		--enable-cgidir=${PREFIX}/www/cgi-bin \

NO_STAGE=	yes
.include <bsd.port.pre.mk>

pre-install:
	@${MKDIR} ${PREFIX}/www/cgi-bin

.include <bsd.port.post.mk>
