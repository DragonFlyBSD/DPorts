# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: textproc/p5-Text-Table/Makefile 326918 2013-09-10 16:48:41Z az $

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

.include <bsd.port.mk>
