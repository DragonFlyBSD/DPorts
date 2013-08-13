# Created by: Mikhail T. <michael@fun-box.ru>
# $FreeBSD: www/p5-Catalyst-Plugin-DateTime/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Catalyst-Plugin-DateTime
PORTVERSION=	0.03
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	perl@FreeBSD.org
COMMENT=	DateTime support for Catalyst

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Catalyst-Runtime>=5.7000:${PORTSDIR}/www/p5-Catalyst-Runtime \
		p5-DateTime>=0:${PORTSDIR}/devel/p5-DateTime
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Catalyst::Plugin::DateTime.3

.include <bsd.port.mk>
