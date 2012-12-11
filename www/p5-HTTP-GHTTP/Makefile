# New ports collection makefile for:	HTTP::GHTTP
# Date created:		11 Jan 2001
# Whom:			Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/www/p5-HTTP-GHTTP/Makefile,v 1.9 2012/11/17 06:02:50 svnexp Exp $
#

PORTNAME=	HTTP-GHTTP
PORTVERSION=	1.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the gnome ghttp library

LIB_DEPENDS=	ghttp.1:${PORTSDIR}/www/libghttp

PERL_CONFIGURE=	yes
CONFIGURE_ARGS=	LIBS="-L${LOCALBASE}/lib -lghttp" INC="-I${LOCALBASE}/include"

MAN3=		HTTP::GHTTP.3

.include <bsd.port.mk>
