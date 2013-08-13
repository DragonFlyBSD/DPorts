# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: textproc/p5-HTML-FormatText-WithLinks-AndTables/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTML-FormatText-WithLinks-AndTables
PORTVERSION=	0.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module to convert HTML to text with tables in tact

BUILD_DEPENDS=	p5-HTML-FormatText-WithLinks>=0:${PORTSDIR}/textproc/p5-HTML-FormatText-WithLinks \
		p5-HTML-Tree>=0:${PORTSDIR}/www/p5-HTML-Tree
RUN_DEPENDS:=	${BUILD_DEPENDS}

WRKSRC=		${WRKDIR}/${PORTNAME}

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::FormatText::WithLinks::AndTables.3

.include <bsd.port.mk>
