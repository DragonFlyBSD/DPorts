# $FreeBSD: ports/Mk/bsd.port.post.mk,v 1.4 2012/11/17 05:54:18 svnexp Exp $

AFTERPORTMK=	yes

.include "bsd.port.mk"

.undef AFTERPORTMK
