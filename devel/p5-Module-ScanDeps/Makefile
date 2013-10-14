# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: devel/p5-Module-ScanDeps/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Module-ScanDeps
PORTVERSION=	1.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RSCHUPP
PKGNAMEPREFIX=	p5-

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Recursively scan Perl code for dependencies

USES=		perl5
USE_PERL5=	configure

MAN1=		scandeps.pl.1
MAN3=		Module::ScanDeps.3

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e \
		's|/usr/bin/perl|${PERL}|' ${WRKSRC}/script/scandeps.pl \
		${WRKSRC}/Makefile.PL

regression-test:
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
