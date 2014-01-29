# Created by: lbr@FreeBSD.org
# $FreeBSD: www/p5-Catalyst-Plugin-LogWarnings/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Catalyst-Plugin-LogWarnings
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Log perl warnings to your Catalyst log object

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7001:${PORTSDIR}/www/p5-Catalyst-Runtime
RUN_DEPENDS:=	${BUILD_DEPENDS} \
		p5-MRO-Compat>=0.11:${PORTSDIR}/devel/p5-MRO-Compat

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
