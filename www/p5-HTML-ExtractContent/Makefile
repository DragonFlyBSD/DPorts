# New ports collection makefile for:	HTML::ExtractContent
# Date created:		05 Mar 2009
# Whom:			Jun Kuriyama <kuriyama@FreeBSD.org>
#
# $FreeBSD: ports/www/p5-HTML-ExtractContent/Makefile,v 1.7 2012/11/17 06:02:49 svnexp Exp $
#

PORTNAME=	HTML-ExtractContent
PORTVERSION=	0.10
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension for HTML content extractor with scoring heuristics

RUN_DEPENDS=	\
	p5-Class-Accessor-Lvalue>0:${PORTSDIR}/devel/p5-Class-Accessor-Lvalue \
	p5-Exporter-Lite>0:${PORTSDIR}/devel/p5-Exporter-Lite \
	p5-HTML-Parser>0:${PORTSDIR}/www/p5-HTML-Parser
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	HTML::ExtractContent.3

.include <bsd.port.mk>
