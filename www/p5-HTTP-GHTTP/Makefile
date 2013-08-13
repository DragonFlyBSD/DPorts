# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/p5-HTTP-GHTTP/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTTP-GHTTP
PORTVERSION=	1.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the gnome ghttp library

LIB_DEPENDS=	ghttp.1:${PORTSDIR}/www/libghttp

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	LIBS="-L${LOCALBASE}/lib -lghttp" INC="-I${LOCALBASE}/include"

MAN3=		HTTP::GHTTP.3

.include <bsd.port.mk>
