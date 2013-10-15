# Created by: coryking
# $FreeBSD: www/p5-HTML-Location/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	HTML-Location
PORTVERSION=	1.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	coryking@mozimedia.com
COMMENT=	Working with disk to URI file mappings (deprecated: see URI::ToDisk)

BUILD_DEPENDS=	p5-Clone>=0.23:${PORTSDIR}/devel/p5-Clone \
		p5-URI>=1.35:${PORTSDIR}/net/p5-URI
RUN_DEPENDS=	p5-Clone>=0.23:${PORTSDIR}/devel/p5-Clone \
		p5-URI>=1.35:${PORTSDIR}/net/p5-URI

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::Location.3

NO_STAGE=	yes
.include <bsd.port.mk>
