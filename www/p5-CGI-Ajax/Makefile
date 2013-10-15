# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: www/p5-CGI-Ajax/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	CGI-Ajax
PORTVERSION=	0.707
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	lth@FreeBSD.org
COMMENT=	A module for writing AJAX/DHTML-based web apps

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	CGI::Ajax.3

NO_STAGE=	yes
.include <bsd.port.mk>
