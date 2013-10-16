# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: www/p5-Catalyst-Plugin-Pluggable/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	Catalyst-Plugin-Pluggable
PORTVERSION=	0.04
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SRI
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Plugin for pluggable Catalyst applications

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Catalyst::Plugin::Pluggable.3

NO_STAGE=	yes
.include <bsd.port.mk>
