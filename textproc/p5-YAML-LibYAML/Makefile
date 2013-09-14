# Created by: TERAMOTO Masahiro <markun@onohara.to>
# $FreeBSD: textproc/p5-YAML-LibYAML/Makefile 326918 2013-09-10 16:48:41Z az $

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

MAN3=		YAML::XS::LibYAML.3 \
		YAML::XS.3

.include <bsd.port.mk>
