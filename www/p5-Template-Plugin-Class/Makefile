# New ports collection makefile for:	p5-Template-Plugin-Class
# Date created:		24 June 2004
# Whom:			Lars Thegler <lth@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-Template-Plugin-Class/Makefile,v 1.7 2012/11/17 06:02:54 svnexp Exp $
#

PORTNAME=	Template-Plugin-Class
PORTVERSION=	0.14
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	Allow calling of class methods on arbitrary classes

BUILD_DEPENDS=	p5-Template-Toolkit>=0:${PORTSDIR}/www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Template::Plugin::Class.3

.include <bsd.port.mk>
