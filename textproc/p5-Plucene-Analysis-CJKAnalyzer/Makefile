# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: textproc/p5-Plucene-Analysis-CJKAnalyzer/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Plucene-Analysis-CJKAnalyzer
PORTVERSION=	0.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:XERN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Analyzer for CJK texts

RUN_DEPENDS=	p5-Plucene>=0:${PORTSDIR}/textproc/p5-Plucene
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-YAML>=0:${PORTSDIR}/textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure

MAN3=		Plucene::Analysis::CJKAnalyzer.3 \
		Plucene::Analysis::CJKTokenizer.3

NO_STAGE=	yes
.include <bsd.port.mk>
