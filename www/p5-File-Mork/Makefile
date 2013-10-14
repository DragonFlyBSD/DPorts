# Created by: Masahiro Teramoto <markun@onohara.to>
# $FreeBSD: www/p5-File-Mork/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	File-Mork
PORTVERSION=	0.3
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:SIMONW
PKGNAMEPREFIX=	p5-

MAINTAINER=	markun@onohara.to
COMMENT=	A module to read Mozilla URL history files

BUILD_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser
RUN_DEPENDS=	p5-HTML-Parser>=0:${PORTSDIR}/www/p5-HTML-Parser

USES=		perl5
USE_PERL5=	configure

MAN1=		mork.1
MAN3=		File::Mork.3

NO_STAGE=	yes
.include <bsd.port.mk>
