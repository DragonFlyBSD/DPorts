# Created by: George Reid <greid@ukug.uk.freebsd.org>
# $FreeBSD: net/tcpstat/Makefile 327888 2013-09-22 18:05:04Z bapt $

PORTNAME=	tcpstat
PORTVERSION=	1.5
CATEGORIES=	net
MASTER_SITES=	http://www.frenchfries.net/paul/tcpstat/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A program to report various network statistics

GNU_CONFIGURE=	yes
NO_STAGE=	yes

MAN1=		tcpstat.1 tcpprof.1
DOCS=		AUTHORS ChangeLog LICENSE README doc/Tips_and_Tricks.txt

.if !defined(NOPORTDOCS)
post-install:
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
