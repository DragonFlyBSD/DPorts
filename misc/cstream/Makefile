# Created by: cracauer@cons.org "Martin Cracauer"
# $FreeBSD: ports/misc/cstream/Makefile,v 1.31 2012/11/25 21:44:48 svnexp Exp $

PORTNAME=	cstream
PORTVERSION=	3.0.0
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://www.cons.org/cracauer/download/

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Like dd(1) tool, precise bandwidth limiting/reporting, fifo, TCP

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

MAN1=		cstream.1
PLIST_FILES=	bin/cstream

post-patch:
	@${REINPLACE_CMD} -e \
		'/^if \[/s| $$CFLAGS | "$$CFLAGS" |' ${WRKSRC}/configure

.include <bsd.port.mk>
