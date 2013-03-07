# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: ports/textproc/p5-Text-Table/Makefile,v 1.12 2013/02/19 18:21:03 svnexp Exp $

PORTNAME=	Text-Table
PORTVERSION=	1.126
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Organize Data in Tables

BUILD_DEPENDS=	p5-Text-Aligner>=0.05:${PORTSDIR}/textproc/p5-Text-Aligner
RUN_DEPENDS=	p5-Text-Aligner>=0.05:${PORTSDIR}/textproc/p5-Text-Aligner

PERL_CONFIGURE=	yes

MAN3=		Text::Table.3

.include <bsd.port.mk>
