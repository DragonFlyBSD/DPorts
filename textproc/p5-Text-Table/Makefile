# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: textproc/p5-Text-Table/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Text-Table
PORTVERSION=	1.127
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Organize Data in Tables

BUILD_DEPENDS=	p5-Text-Aligner>=0.05:${PORTSDIR}/textproc/p5-Text-Aligner
RUN_DEPENDS=	p5-Text-Aligner>=0.05:${PORTSDIR}/textproc/p5-Text-Aligner

USES=		perl5
USE_PERL5=	configure

MAN3=		Text::Table.3

NO_STAGE=	yes
.include <bsd.port.mk>
