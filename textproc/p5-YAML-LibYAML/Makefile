# Created by: TERAMOTO Masahiro <markun@onohara.to>
# $FreeBSD: head/textproc/p5-YAML-LibYAML/Makefile 341634 2014-01-28 16:47:39Z miwi $

PORTNAME=	YAML-LibYAML
PORTVERSION=	0.41
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	Perl YAML Serialization using XS and libyaml

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Filter>0:${PORTSDIR}/devel/p5-Filter
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
