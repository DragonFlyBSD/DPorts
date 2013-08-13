# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-XML-Atom-Filter/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	XML-Atom-Filter
PORTVERSION=	0.07
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Easy creation of command line Atom processing tools

RUN_DEPENDS=	p5-XML-Atom>=0:${PORTSDIR}/textproc/p5-XML-Atom
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	XML::Atom::Filter.3

.include <bsd.port.mk>
