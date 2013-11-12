# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-XML-Atom-Filter/Makefile 333056 2013-11-07 03:52:41Z vanilla $

PORTNAME=	XML-Atom-Filter
PORTVERSION=	0.07
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easy creation of command line Atom processing tools

BUILD_DEPENDS=	p5-XML-Atom>=0:${PORTSDIR}/textproc/p5-XML-Atom
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
