# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: devel/p5-Config-AutoConf/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Config-AutoConf
PORTVERSION=	0.22
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to implement some of AutoConf macros

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Capture-Tiny>=0:${PORTSDIR}/devel/p5-Capture-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Config::AutoConf.3

NO_STAGE=	yes
.include <bsd.port.mk>
