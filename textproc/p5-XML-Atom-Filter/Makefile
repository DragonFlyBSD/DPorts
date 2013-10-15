# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: textproc/p5-XML-Atom-Filter/Makefile 327773 2013-09-20 23:17:30Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
