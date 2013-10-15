# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Config-Perl-V/Makefile 327724 2013-09-20 17:13:42Z bapt $
PORTNAME=	Config-Perl-V
PORTVERSION=	0.15
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:HMBRAND
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Structured data retrieval of perl -V output

BUILD_DEPENDS=	p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Config::Perl::V.3

NO_STAGE=	yes
.include <bsd.port.mk>
