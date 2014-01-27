# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: textproc/p5-Text-Table/Makefile 340574 2014-01-21 08:17:00Z mat $

PORTNAME=	Text-Table
PORTVERSION=	1.127
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Organize Data in Tables

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Text-Aligner>=0.05:${PORTSDIR}/textproc/p5-Text-Aligner
RUN_DEPENDS=	p5-Text-Aligner>=0.05:${PORTSDIR}/textproc/p5-Text-Aligner

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
