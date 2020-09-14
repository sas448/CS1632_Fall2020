import org.junit.Test;
import static org.junit.Assert.*;
import org.junit.After;
import org.junit.Before;

import org.mockito.*;

public class CatScaleTest {
	@Test
	public void testReport() {
		CatScale scale = new CatScale();
		Cat cat = Mockito.mock(Cat.class);
		Mockito.when(cat.getWeight()).thenReturn(80);
		assertEquals("Overweight", scale.report(cat));
		Mockito.verify(cat).getWeight();
	}
}
