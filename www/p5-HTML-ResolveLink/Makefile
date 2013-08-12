# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: www/p5-HTML-ResolveLink/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTML-ResolveLink
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Resolve relative links in (X)HTML into absolute URI

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser \
		p5-URI>0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::ResolveLink.3

.include <bsd.port.mk>
