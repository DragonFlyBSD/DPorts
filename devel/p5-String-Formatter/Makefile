# Created by: Geraud CONTINSOUZAS <geraud@gcu.info>
# $FreeBSD: devel/p5-String-Formatter/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	String-Formatter
PORTVERSION=	0.102082
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	geraud@gcu.info
COMMENT=	Build sprintf-like functions of your own

LICENSE=	GPLv2

RUN_DEPENDS=	p5-Params-Util>=0:${PORTSDIR}/devel/p5-Params-Util \
		p5-Sub-Exporter>=0:${PORTSDIR}/devel/p5-Sub-Exporter
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	String::Formatter.3 \
	String::Formatter::Cookbook.3

NO_STAGE=	yes
.include <bsd.port.mk>
